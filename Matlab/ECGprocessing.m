%% 读取数据
%% 该项目采用的是MIT-BIH数据库中的第111个信号 使用了该信号的5400个数据，即15秒的数据
clear
clc
close all
Fs=360;                     %采样频率
[filename, pathname] = uigetfile('*.dat', 'Open file .dat');% only image Bitmap
if isequal(filename, 0) || isequal(pathname, 0)   
    disp('File input canceled.');  
   ECG_Data = [];  
else
fid=fopen(filename,'r');
end
time=15;
f=fread(fid,2*360*time,'ubit12');
M=f(1:2:length(f));
M = M-1024;                               %M就是解码出来的数据
M=0.005*(M);
t=(0:1:length(M)-1)/Fs;
N=length(M);
figure(1)
plot(t,M(:,1)),xlabel('t（s）'),ylabel('mv'),title('原始信号')
%% 原始信号进行频谱分析
mf1=fft(M,N);%进行傅里叶变换
mag1=abs(mf1);
f1=(0:length(mf1)/2-1)*Fs/length(mf1);  %进行频率变换
figure(2)
plot(f1,mag1(1:N/2));grid;      %画出频谱图  
xlabel('频率(HZ)');ylabel('幅值');title('心电信号M幅度谱'); 
figure(3)
plot(f1,angle(mf1(1:N/2)));grid;
xlabel('频率(HZ)');ylabel('相位');title('心电信号M相位谱'); 

P1=20*log10(mag1);
f1=(0:length(P1)/2-1)*Fs/length(P1);  
figure(4)
plot(f1,P1(1:N/2));grid  
xlabel('频率(HZ)');ylabel('功率(dB)');title('心电信号M的分贝谱');  
figure
%% 原信号方差均值计算
avr1=mean(M);
fprintf('原信号的均值= %f\n',avr1);
var1=var(M);
fprintf('原信号的方差= %f\n',var1);
rx1=xcorr(M,'biased');
plot(rx1);grid;title('原始心电信号的自相关函数');
figure
%% 
%% 低通滤波器滤除肌电信号
%低通滤波器的设计
fp=55;fs=80;Fs=360; %通带截止频率，阻带截止频率，采样点数
rp=1;rs=1.8; %阻带衰减、通带衰减
wp=2*pi*fp/Fs; 
ws=2*pi*fs/Fs; 
Fs=Fs/Fs; % let Fs=1 
wap=tan(wp/2);was=tan(ws/2); %求取模拟通带截止频率阻带截止频率
[n,wn]=buttord(wap,was,rp,rs,'s') ;%根据模拟滤波器的指标设计巴特沃斯滤波器
[z,p,k]=buttap(n); %设计巴特沃斯滤波器，Z为极点P为零点K为增益
[bp,ap]=zp2tf(z,p,k) ;%转化为Hap,Bap为分子系数，Aap为分母系数
[bs,as]=lp2lp(bp,ap,wap); 
[bz,az]=bilinear(bs,as,Fs/2) ;
[H,W]=freqz(bz,az,256,Fs*1000); 
figure(6)
subplot(2,1,1);plot(W,20*log10(abs(H)));grid;
xlabel('Hz');ylabel('幅度');title('幅频响应曲线')
subplot(2,1,2);plot(W,angle(H));grid;
xlabel('Hz');ylabel('相角（rad）');title('相频响应曲线')
%% 低通滤波
m=filtfilt(bz,az,M(:,1));
figure(7)
subplot(2,1,1);
plot(t,M(:,1));
xlabel('t(s)');ylabel('mv');title('原始心电信号波形');grid;
subplot(2,1,2);
plot(t,m);
xlabel('t(s)');ylabel('mv');title('低通滤波后的时域图形');grid;
%% 低通滤波后的频谱分析
mf=fft(M(:,1),N);               %进行傅里叶变换
mag=abs(mf);
Fs=360;
f=(0:length(mf)/2-1)*Fs/length(mf);  %进行傅里叶变换
%原信号频谱
figure(8)
subplot(2,1,1)
plot(f,mag(1:N/2));grid;      %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('心电信号频谱图');
%低通滤波后频谱
mfa=fft(m,N);                    %进行频谱变换（傅里叶变换）
maga=abs(mfa);
fa=(0:length(mfa)/2-1)*Fs/length(mfa);  %进行频率变换
subplot(2,1,2),plot(fa,maga(1:N/2));grid;  %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('低通滤波后心电信号频谱图');
%低通滤波后分贝谱
P=20*log10(maga);
f=(0:length(P)/2-1)*Fs/length(P);
figure(9)
plot(f,P(1:N/2));grid
xlabel('频率(HZ)');ylabel('功率(dB)');title('低通滤波后心电信号的分贝谱');
%% %低通滤波信号方差均值计算
avr2=mean(m);
fprintf('低通滤波后信号的均值= %f\n',avr2);
var2=var(m);
fprintf('低通滤波信号的方差= %f\n',var2);
figure
rx2=xcorr(m,'biased');
plot(rx2);grid;title('低通滤波心电信号的自相关函数');
%% 带陷滤波器滤除工频信号
%带陷滤波器设计
fp=[59.5 60.5];fs=[59 61]; %通带阻带截止频率
rp=0.1;rs=18;              %通带阻带衰减
Fs=360;                    %抽样频率
wp=fp*2*pi/Fs;             %通带阻带截止频率
ws=fs*2*pi/Fs; 
wap=2*Fs*tan(wp./2); %求取模拟通带截止频率
was=2*Fs*tan(ws./2); %求取模拟阻带截止频率
[n,wn]=buttord(wap,was,rp,rs,'s'); %设计巴特沃斯滤波器，Z为极点P为零点K为增益
[z,p,k]=buttap(n); %设计巴特沃斯滤波器，Z为极点P为零点K为增益
[bp,ap]=zp2tf(z,p,k); %转化为Hap,Bap为分子系数，Aap为分母系数
bw=wap(2)-wap(1) ;%阻带带宽
w0=sqrt(wap(1)*wap(2)) ;%阻带中心频率
[bs,as]=lp2bs(bp,ap,w0,bw) ;%低通到带阻频带变换
% Note: z=(2/Ts)(z-1)/(z+1); 
[bz1,az1]=bilinear(bs,as,Fs) ;
[h3,w3]=freqz(bz1,az1,1000,Fs); 
figure(11)
plot(w3,20*log10(abs(h3)));grid; 
ylabel('dB') ;xlabel('Hz'); axis([0,100,-80,10]);title('带阻滤波器幅频特性曲线');
%% %带阻滤波器滤波
m2=filtfilt(bz1,az1,m);

figure(12)
subplot(2,1,1); plot(t,m);
ylabel('幅值');title('仅低通滤波后信号');grid;
subplot(2,1,2);plot(t,m2);
ylabel('幅值');title('低通&带阻滤波后信号');grid;

figure(13)
fa=(0:length(mfa)/2-1)*Fs/length(mfa);  %进行频率变换
subplot(2,1,1)
plot(fa,maga(1:N/2));grid;      %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('低通滤波后信号频谱图');
Fs=360;
%低通带通滤波后频谱
mfa1=fft(m2,N);                    %进行频谱变换（傅里叶变换）
maga1=abs(mfa1);
fa1=(0:length(mfa1)/2-1)*Fs/length(mfa1);  %进行频率变换
subplot(2,1,2),plot(fa1,maga1(1:N/2));grid;  %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('低通带阻滤波后信号频谱图');
%低通滤波后分贝谱
P2=20*log10(maga1);
f2=(0:length(P2)/2-1)*Fs/length(P2);
figure(14)
plot(f2,P2(1:N/2));grid
xlabel('频率(HZ)');ylabel('功率(dB)');title('低通带阻滤波后心电信号的分贝谱');
%% 低通带通滤波后信号方差均值计算
avr3=mean(m2);
fprintf('低通带阻滤波后信号的均值= %f\n',avr3);
var3=var(m2);
fprintf('低通带阻滤波后信号的方差= %f\n',var3);
figure
rx3=xcorr(m2,'biased');
plot(rx3);grid;title('低通带阻滤波心电信号的自相关函数');
figure
%% 通过高通滤波器消除基线偏移
%% 高通滤波器设计
fp=1;fs=2;Fs=360; 
rp=3;rs=20; 
wp=2*pi*fp/Fs; 
ws=2*pi*fs/Fs; 
Fs=Fs/Fs; % let Fs=1 
% Firstly to finish frequency prewarping ; 
wap=tan(wp/2);was=tan(ws/2); % 
[n,wn]=buttord(wap,was,rp,rs,'s'); % 
% Note: ’s’! 
[z,p,k]=buttap(n); 
[bp,ap]=zp2tf(z,p,k) ;
[bs,as]=lp2hp(bp,ap,wap) ;
% Note: s=(2/Ts)(z-1)/(z+1);Ts=1,that is 2fs=1,fs=0.5; 
[bz2,az2]=bilinear(bs,as,Fs/2) ;
[h2,w2]=freqz(bz2,az2,256,Fs*1000); 
figure(16)
plot(w2,abs(h2));grid on;
xlabel('Hz');ylabel('幅度');title('高通滤波器的幅频响应曲线')
%% 高通滤波器滤波
result=filtfilt(bz2,az2,m2);%通过1Hz高通滤波器的信号

figure(17)
subplot(211)
plot(t,m2);
xlabel('时间（s）');ylabel('电压（mv）');title('低通带阻滤波后心电信号波形');
subplot(212)
plot(t,result);
xlabel('时间（s）');ylabel('电压（mv）');title('去除基线漂移后的最终心电信号波形');

result_ft=fft(result,N);
f_result=(0:length(result_ft)/2-1)*Fs/length(result_ft);  %进行频率变换

figure(18)
subplot(2,1,1),plot(fa1,maga1(1:N/2));grid;  %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('低通带阻滤波后信号频谱图');
subplot(2,1,2),plot(fa1,abs(result_ft(1:N/2)));grid;  %画出频谱图
xlabel('频率(HZ)');ylabel('幅值');title('去除基线漂移最终频谱图');

P3=20*log10(abs(result_ft));
f3=(0:length(P3)/2-1)*Fs/length(P3);
figure(19)
plot(fa1,P3(1:N/2));grid
xlabel('频率(HZ)');ylabel('功率(dB)');title('去除基线漂移最终心电信号的分贝谱');

%% 绘制最终信号和初始信号比较
figure(20)
subplot(211),plot(t,M)
xlabel('t(s)');ylabel('mv');title('原始信号波形');
subplot(212),plot(t,result)
xlabel('t(s)');ylabel('mv');title('最终信号的波形');
%% 滤波后方差均值计算
%%可以看到均值近似为0
avr4=mean(result);
fprintf('滤波完成后信号的均值= %f\n',avr4);
var4=var(result);
fprintf('滤波完成后信号的方差= %f\n',var4);
rx4=xcorr(result,'biased');
figure
plot(rx4);grid;title('处理后的信号自相关函数');

%% Peak detection algorithm % 网上的函数
%% Hooman Sedghamiz
figure
[R_i,R_amp,S_i,S_amp,T_i,T_amp,Q_i,Q_amp,buffer_plot] = SimpleRST(result,360,15);
function [R_i,R_amp,S_i,S_amp,T_i,T_amp,Q_i,Q_amp,buffer_plot] = SimpleRST(ecg,fs,gr)
%% function [R_i,R_amp,S_i,S_amp,T_i,T_amp]=peakdetect(ecg,fs,view)
%% =================== Online Adaptive QRS detector 在线自适应QRS检波器==================== %%
%% ========================== Description ============================= %%
% QRS detection   QRS 波检测
% Detects Q , R and S waves,T Waves  检测QRST波
% Uses the state-machine logic to determine different peaks in an ECG 
% signal. It has the ability to confront noise by canceling out the noise
% by high pass filtering and baseline wander by low pass. Besides, check
% out criterion to stop detection of spikes.
% 使用状态机逻辑检测ECG信号的不同波峰。它可以通过高通滤波消除噪声，通过低通滤波消除基线漂移，从而对抗噪声。并且按标准符合阻止检测尖峰
% The code is written in a way for future online implementation. |  代码使用未来在线的方式实现
%% Inputs 输入
% ecg : raw ecg vector  | ecg:原始ECG向量
% fs : sampling frequency | fs:采样率
% view : display results? (0: no, 1: Yes) | view:是否显示结果 0:否  1:是
%% Outputs | 输出
% indexes and amplitudes of R_i, R_amp, etc | R_i、R_amp等的索引和振幅
% heart_rate computed heart rate |  heart_rate：计算后的心率
% buffer_plot : processed signal |  buffer_plot：处理后的信号
%% ============== Now Part of BioSigKit |BioSigKit部分 ======================== %%
if nargin < 3
    gr = 1;                                         % on show Sig | 显示信号
    if nargin <2
       fs = 360;                                    % default Sampling frequency | 默认采样率
       if nargin < 1
           error('You need to provide a signal!');
       end
    end 
end
%% ========================= initialize ============================ %%
R_i = zeros(1,length(ecg));                         % 保存R波指数           % save index of R wave
R_amp = zeros(1,length(ecg));                       %保存R波的放大器        % save amp of R wave
S_i = zeros(1,length(ecg));                         % 保存S波指数           % save index of S wave
S_amp = zeros(1,length(ecg));                       %保存S波的放大器        % save amp of S wave
T_i = zeros(1,length(ecg));                         % 保存T波指数           % save index of T wave
T_amp = zeros(1,length(ecg));                       %保存T波的放大器        % save amp of T wave
Q_i = zeros(1,length(ecg));                         %储存Q波的向量          % vectors to store Q wave
Q_amp = zeros(1,length(ecg));                                              % Vectors to store Q wave
S_amp1 = zeros(1,length(ecg));                      %设置自适应T波开始的缓冲 % Buffer to set the adaptive T wave onset
thres_p =zeros(1,length(ecg));                       %用于绘制自适应阈值    % For plotting adaptive threshold
S_amp1_i = zeros(1,length(ecg));                                           % To save indices of S thres | 保存S波阈值的编号
buffer_plot = zeros(1,length(ecg));
thres2_p = zeros(1,length(ecg));                                           % T wave threshold indices | T波阈值的编号
window = round(0.04*fs);                                                   % averaging window size | 平均窗口大小
buffer_long= zeros(1,window);                                              % buffer for online processing | 在线处理的缓冲器
state = 0 ;                                                                % determines the state of the machine in the algorithm | 决定算法中状态机的状态
c = 0;                                                                     % counter to determine that the state-machine doesnt get stock in T wave detection wave | 此计数器用于确定状态机不会陷入T波检波
T_on = 0;                                                                  % counter showing for how many samples the signal stayed above T wave threshold | 此计数器用于显示信号在T波阈值上的样本数量
T_on1=0;                                                                   % counter to make sure its the real onset of T wave | 此计数器用于确认其为T波的真实起始
S_on = 0;                                                                  % counter to make sure its the real onset of S wave | 此计数器用于确认其为S波的真实起始
sleep = 0;                                                                 % counter that avoids the detection of several R waves in a short time | 此计数器用于避免在短时间内检测到多个R波
buffer_base=zeros(1,2*fs);                                                 % buffer to determine online adaptive mean of the signal | 此缓冲器用于确定信号的在线自适应平均值
dum = 0;                                                                   % counter for detecting the exact R wave | 此计数器用于检测精确R波
weight = 1.8;                                                              % initial value of the weigth | 权重初始值
co = 0;                                                                    % T wave counter to come out of state after a certain time | T波计数器在一段时间后脱离状态
thres_p_i = zeros(1,length(ecg));                                          % To save indices of main thres |  保存主要阈值的索引
thres2_p_i = zeros(1,length(ecg));                                         %to save indices of T threshold |  保存T波阈值的索引
%% ========================= preprocess|预处理 ================================ %%
ecg = ecg (:);                                                             % make sure its a vector|保证它是向量
%% 

%% ==============  define two buffers|定义两个缓冲器 ================= %%

buffer_mean=mean(abs(ecg(1:2*fs)-mean(ecg(1:2*fs))));                      % adaptive threshold DC corrected (baseline removed)|自适应阈值DC校正（基线移除）
buffer_T = mean(ecg(1:2*fs));                                              % second adaptive threshold to be used for T wave detection|用于T波检测的第二个自适应阈值
%% ================== Counters |计数器============================ %%
B_Lcounter = 0;
B_counter = 0;
SP_counter = 0;
thres_p_C = 0;
R_C = 0;
S_C = 0;
T_C = 0;
Q_C = 0;
thres2_p_C = 0;
%% =start online inference (Assuming the signal is being acquired online) |开始在线推断（假设信号是在线获取的）%%
for i = 1 : length(ecg)
 B_Lcounter = B_Lcounter + 1;  
 buffer_long(B_Lcounter) = ecg(i);                                         % save the upcoming new samples|保存将来的新样本
 if B_Lcounter > window
    B_Lcounter = 0; 
 end

 B_counter = B_counter + 1;
 buffer_base(B_counter) = ecg(i);                                          % save the baseline samples|保存基线样本

%% ============================= Renew Mean |更新均值======================= %%
 if B_counter >= 2*fs
    buffer_mean = mean(abs(buffer_base - mean(buffer_base)));
    buffer_T = mean(buffer_base);
    B_counter = 0;
 end

%% ========= Smooth  15 samples and add the new upcoming samples |平滑15个样本，并添加新的后续样本======== %%
  if i >= window                                                  % take a window with length 15 samples for averaging|取一个长度为15个样本的窗口进行平均
      mean_online = mean(buffer_long);                       % take the mean|取均值
      SP_counter = SP_counter + 1;
      buffer_plot(SP_counter) = mean_online;                               % save the processed signal|保存处理后的信号
      
      
    %% ==============  Enter state 1(putative R wave) |进入状态1 （假定R波）================ %%
    if state == 0  
     if SP_counter >= 3                                                                         % added to handle bugg for now|现在添加了处理bugg的功能
      if (mean_online > buffer_mean*weight) && (buffer_plot(i-1-window) > buffer_plot(i-window))    % 2.4*buffer_mean   
          state = 1;                                                                            % entered R peak detection mode|进入R波峰检测模式
          currentmax = buffer_plot(i-1-window);
          ind = i-1-window;
          thres_p_C = thres_p_C + 1;
          thres_p(thres_p_C) = buffer_mean*weight;
          thres_p_i(thres_p_C) = ind;
      else     
          state = 0;
      end
     end
    end
    
%% ============= Locate R by finding highest Peak |通过找到最高峰来定位R波=================== %%
      if state == 1                                                        % look for the highest peak|寻找最高峰
            if  currentmax > buffer_plot(i-window)
                dum = dum + 1;
                if dum > 4 
                   R_C = R_C + 1;
                   R_i(R_C) = ind;                                          % save index|保存编号
                   R_amp(R_C) = buffer_plot(ind);                          % save index|保存编号
                %-------------- Locate Q wave --------------------%
                  [Q_tamp,Q_ti] = min(buffer_plot(ind-round(0.040*fs):(ind)));
                  Q_ti = ind-round(0.040*fs) + Q_ti -1;
                  Q_C = Q_C + 1;
                  Q_i(Q_C) = Q_ti;
                  Q_amp(Q_C) = Q_tamp;                           
                  if R_C > 8
                     weight = 0.30*mean(R_amp(R_C-7:R_C));                  % calculate the 35% of the last 8 R waves|计算最后8个R波的35%
                     weight = weight/buffer_mean;
                  end
                  state = 2;                                                % enter S detection mode state 2|进入状态2，S波检测模式
                  dum = 0;
                end
            else
                dum = 0;
                state = 0;
            end 
            
      end
      
  %% === check if Sig drops below the threshold to look for S wave === %%
      if state == 2 
        if  mean_online <= buffer_mean                                     % check the threshold|检测阈值
             state = 3;                                                    % enter S detection    |进入S波检测       
        end
      end
      
  %% ============ Enter S wave detection state3 (S detection) |进入S波检测模式3（S波检测）=========== %%
         if state == 3
            co = co + 1;    
          if co < round(0.200*fs)
            if buffer_plot(i-window-1) <= buffer_plot(i-window)            % see when the slope changes|检测斜率改变
             S_on = S_on + 1;                                              % set a counter to see if its a real change or just noise|设置一个计数器，识别这是真正的变化还是噪音
             if S_on >= round(0.0120*fs)
                S_C = S_C + 1;
                S_i(S_C) = i-window-4;                                     % save index of S wave|保存S波的编号
                S_amp(S_C) = buffer_plot(i-window-4);                      % save index|保存编号
                S_amp1(S_C) = buffer_plot(i-window-4);                     % ecg(i-4)
                S_amp1_i(S_C) = ind;                                       % index of S_amp1_i|S_amp1_i的编号
                state = 4;                                                 % enter T detection mode|进入T波检测模式
                S_on = 0;
                co = 0;
             end
            end
          else
                state = 4;
                co = 0;
          end
          end
      
       %% ======= enter state 4 possible T wave detection |进入状态4：可能的T波检测============ %%
       if state == 4    
         if mean_online < buffer_mean                                      % See if the signal drops below mean |检查信号是否低于均值
           state = 6;                                                      % Confirm|确认
         end
       end
       %% ======= Enter state 6 which is T wave possible detection |进入状态6，即可能检测到T波======%%
       if state ==6   
         c = c + 1;                                                        % set a counter to exit the state if no T wave detected after 0.3 second|如果0.3秒后未检测到T波，设置计数器退出状态
         if c <= 0.7*fs  
             %------------------------------------------------------------%
             % set a double threshold based on the last detected S wave and
             % baseline of the signal and look for T wave in between these
             % two threshold
% 	           根据最后检测到的S波和信号基线设置双阈值，并在这两个阈值之间寻找T波
             %------------------------------------------------------------%
             thres2 = ((abs(abs(buffer_T)-abs(S_amp1(S_C))))*3/4 + S_amp1(S_C)); 
             thres2_p_C = thres2_p_C + 1;
             thres2_p(thres2_p_C) = thres2;
             thres2_p_i(thres2_p_C) = ind;
             if mean_online > thres2
              T_on = T_on +1;                                              % make sure it stays on for at least 3 samples|确保至少3个样本都能保持这种状态
              if T_on >= round(0.0120*fs)
               if buffer_plot(i-window-1)>= buffer_plot(i-window)
                   T_on1 = T_on1+1;                                        % make sure its a real slope change|确保这是真正的斜率变化
                  if T_on1 > round(0.0320*fs) 
                   T_C = T_C + 1;
                   T_i(T_C) = i-window-11;                                 % save index of T wave|保存T波的编号
                   T_amp(T_C) = buffer_plot(i-window-11);                  % save index|保存编号
                   state = 5;                                              % enter sleep mode|进入睡眠模式
                   T_on = 0;
                   T_on1 = 0;
                  end                      
               end
              end
             end         
         else
             state= 5;                                                     % enter Sleep mode|进入睡眠模式
         end
         
       end  
  %% ==== Sleep To avoid multiple detections |睡眠模式，防止多次检测================== %%
       if state==5
           sleep =sleep+c+1;
           c = 0;
           if sleep/fs >= 0.400
               state = 0;
               sleep = 0;
           end  
       end     
  end
  
end
%% ============== Adjust Length of Signals|调整信号的长度 ===================== %%
R_i = R_i(1:R_C);
S_i = S_i(1:S_C);
S_amp1 = S_amp1(1:S_C);
S_amp1_i = S_amp1_i(1:S_C);
T_i = T_i(1:T_C);
Q_i = Q_i(1:Q_C);
thres_p_i = thres_p_i(1:thres_p_C);
thres_p = thres_p(1:thres_p_C);
buffer_plot = buffer_plot(1:SP_counter);
thres2_p = thres2_p(1:thres2_p_C);
thres2_p_i = thres2_p_i(1:thres2_p_C);
%% 

%% plottings |绘制
if gr
   view = length(ecg)/fs;
   time = 1/fs:1/fs:view;
   R = find(R_i <= view*fs);                                                  % determine the length for plotting vectors|确定绘制向量的长度
   S = find(S_i <= view*fs);                                                  % determine the length for plotting vectors
   T = find(T_i <= view*fs);                                                  % determine the length for plotting vectors
   Q = find(Q_i <= view*fs);                                                  % determine the length for plotting vectors
   L1 = find(thres_p_i <= view*fs);
   L2 = find(S_amp1_i <= view*fs);
   L3 = find(thres2_p_i <= view*fs);
   if view*fs > length(buffer_plot)
      ax(1) = plot(time(1:length(buffer_plot)),buffer_plot(1:end));   
   else
      ax(1) = plot(time,buffer_plot(1:(view*fs)));
   end
   axis tight;
   hold on,scatter(R_i(1:R(end))./fs,R_amp(1:R(end)),'r');
   hold on,scatter(S_i(1:S(end))./fs,S_amp(1:S(end)),'g');
   hold on,scatter(T_i(1:T(end))./fs,T_amp(1:T(end)),'k');
   hold on,scatter(Q_i(1:Q(end))./fs,Q_amp(1:Q(end)),'m');
   hold on,plot(thres_p_i(1:L1(end))./fs,thres_p(1:L1(end)),'LineStyle','-.','color','r',...
    'LineWidth',2.5);
   hold on,plot(S_amp1_i(1:L2(end))./fs,S_amp1(1:L2(end)),'LineStyle','--','color','c',...
    'LineWidth',2.5);
   hold on,plot(thres2_p_i(1:L3(end))./fs,thres2_p(1:L3(end)),'-k','LineWidth',2);
   legend('心电信号','R 波','S 波','T 波','R 自适应阈值','最新的S波','T波 自适应阈值','Location','NorthOutside','Orientation','horizontal'); 
   xlabel('t(s)'),ylabel('mV');
   axis tight; 
   title('峰值检测后的信号');
end
end