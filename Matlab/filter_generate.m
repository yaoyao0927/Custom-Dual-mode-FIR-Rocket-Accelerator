%% 读取数据
%% 该项目采用的是MIT-BIH数据库中的第111个信号 使用了该信号的5400个数据，即10秒的数据
clear
clc
close all
Fs=360;                     %采样频率
[filename, pathname] = uigetfile('*.dat', 'Open file .dat');% only image Bitmap
fid=fopen(filename,'r');

time=5;
f=fread(fid,2*360*time,'ubit12');
M=f(1:2:length(f));
M = M-1024;                               %M就是解码出来的数据
M=0.005*(M);
t=(0:1:length(M)-1)/Fs;
N=length(M);

%生成噪声信号
N = length(M); %采样点数
dt = 1/360;    %采样间隔
n = dt:dt:N*dt; 
noise = 0.08*sin(2*pi*60*n); 
plot(noise);
title('noise signal');

M_noise = M + noise ;
figure(2)
subplot(2,1,1);
plot(t,M(:,1));
xlabel('t(s)');ylabel('mv');title('Original ECG Signal');grid;
subplot(2,1,2);
plot(t,M_noise(:,1));
xlabel('t(s)');ylabel('mv');title('ECG Signal with noise');grid;

%% 8阶/16阶滤波后 量化对比 //调用生成的filter函数
out_8_sw = filter(lp_8,M_noise); 
out_8_hw = filter(lp_8_hw,M_noise_hw);
out_16_sw = filter(lp_16,M_noise);
out_16_hw = filter(lp_16_hw,M_noise_hw);
figure(1)
plot(t,M(:,1));
hold on;
plot(t,out_8_sw(:,1));
hold on;
plot(t,out_8_hw(:,1));
hold on;
plot(t,out_16_sw(:,1));
hold on;
plot(t,out_16_hw(:,1));
xlabel('t(s)');ylabel('mV');title('Quantized and Unquantized Filtered Signals');grid;
xlim([0.7 1.65])
ylim([-1 1])
legend('Noise-free Signal','8-tap','Quantized 8-tap','16-tap','Quantized 16-tap')
zp = BaseZoom(); % 局部放大
zp.plot;

% 计算均方误差 (MSE) 
error_8 = M - out_8_hw;
mse_8  = mse(error_8);
mse_8 = mean((M - out_8_hw).^2);
error_16 = M - out_16_hw;
mse_16  = mse(error_16);
mse_16 = mean((M - out_16_hw).^2);
% 计算峰值信噪比 (PSNR)
psnr_8 = 10 * log10(max(M(:))^2 / 0.000975131988525391);
psnr_16 = 10 * log10(max(M(:))^2 / 0.000530242919921875);
disp(['The PSNR of the filtered ECG signal is ', num2str(psnr_8), ' dB.'])

mse_8 = 0.000975131988525391
mse_16 = 0.000530242919921875
psnr_8 = 28.7487
psnr_16 = 31.3946
8阶sw滤波后信号的均值= -0.466406
8阶sw滤波后信号的方差= 0.036597
8阶hw滤波后信号的均值= 0.000316
8阶hw滤波后信号的方差= -0.000078
16阶sw滤波后信号的均值= -0.377618
16阶sw滤波后信号的方差= 0.031862
16阶sw滤波后信号的均值= -0.000386
16阶sw滤波后信号的方差= -0.000766

%% 滤波后方差均值计算
%%可以看到均值近似为0
avr_8_hw=mean(out_8_hw);
fprintf('8阶滤波后信号的均值= %f\n',avr_8_hw);
var_8_hw=var(out_8_hw);
fprintf('8阶滤波后信号的方差= %f\n',var_8_hw);

avr_16_hw=mean(out_16_hw);
fprintf('16阶sw滤波后信号的均值= %f\n',avr_16_hw);
var_16_hw=var(out_16_hw);
fprintf('16阶sw滤波后信号的方差= %f\n',var_16_hw);


%% filter降低精度后的数据
M_noise_hw = round(M_noise, 5);
M_noise_hw = floor(M_noise_hw);

%%将系数输出成chisel符号数格式
fprintf("%d.S, ",Num_lp8);
numRows = 20;  % 分20行打印
numCols = numel(M_noise_hw) / numRows;  % 计算列数

% 将向量 M_noise_hw 重新调整为 20 行的矩阵
reshapedMatrix = reshape(M_noise_hw, numRows, numCols);

% 遍历每一行并用逗号打印元素
for col = 1:numCols
    colStr = sprintf('%d,', reshapedMatrix(:,col));
    disp(colStr(1:end));
end

for 
%% 原始信号进行频谱分析
mf1=fft(M_noise,N);%进行傅里叶变换
mag1=abs(mf1);
f1=(0:length(mf1)/2-1)*Fs/length(mf1);  %进行频率变换
figure(3)
plot(f1,mag1(1:N/2));grid;      %画出频谱图  
xlabel('Frequncy(HZ)');ylabel('Magnitude');title('Original ECG Signal Magnitude Spectrum'); 
figure(4)
plot(f1,angle(mf1(1:N/2)));grid;
xlabel('Frequncy(HZ)');ylabel('Phase');title('ECG Signal Phase Spectrum'); 



%原信号频谱
figure(4)
subplot(3,1,1)
plot(f1,mag1(1:N/2));grid;      %画出频谱图
xlim([0 70])
ylim([0 120])
xlabel('Frequncy(HZ)');ylabel('Magnitude');
title('Original ECG Signal Magnitude Spectrum');

%8阶低通滤波后频谱
mf8=fft(lp_8_out(:,1),N);               %进行傅里叶变换
mag8=abs(mf8);
Fs=360;
f8=(0:length(mf8)/2-1)*Fs/length(mf8);  %进行傅里叶变换
subplot(3,1,2),plot(f8,mag8(1:N/2));grid;  %画出频谱图
xlim([0 70])
ylim([0 120])
xlabel('Frequncy(HZ)');ylabel('Magnitude');
title('8-tap lowpass filtered ECG Signal Magnitude Spectrum');

%16阶低通滤波后频谱
mf16=fft(lp_16_out(:,1),N);               %进行傅里叶变换
mag16=abs(mf16);
f16=(0:length(mf16)/2-1)*Fs/length(mf16);  %进行傅里叶变换
subplot(3,1,3),plot(f16,mag16(1:N/2));grid;  %画出频谱图
xlim([0 70])
ylim([0 120])
xlabel('Frequncy(HZ)');ylabel('Magnitude');
title('16-tap lowpass filtered ECG Signal Magnitude Spectrum');

figure(5)
subplot(3,1,1);
plot(t,M_noise(:,1));
xlim([0 4])
ylim([-1 1])
xlabel('t(s)');ylabel('mv');title('Original ECG Signal');grid;
subplot(3,1,2);
plot(t,lp_8_out(:,1));
xlim([0 4])
ylim([-1 1])
xlabel('t(s)');ylabel('mv');title('8-tap lowpass filtered ECG Signal');grid;
subplot(3,1,3);
plot(t,lp_16_out(:,1));
xlim([0 4])
ylim([-1 1])
xlabel('t(s)');ylabel('mv');title('16-tap lowpass filtered ECG Signal');grid;