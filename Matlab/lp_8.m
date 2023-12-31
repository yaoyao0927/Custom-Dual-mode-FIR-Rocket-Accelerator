function Hd = lp_8
%LP_8 返回离散时间滤波器对象。

% MATLAB Code
% Generated by MATLAB(R) 9.14 and DSP System Toolbox 9.16.
% Generated on: 07-Jun-2023 11:15:07

% FIR least-squares Lowpass filter designed using the FIRLS function.

% All frequency values are in Hz.
Fs = 360;  % Sampling Frequency

N     = 7;    % Order
Fpass = 40;   % Passband Frequency
Fstop = 60;   % Stopband Frequency
Wpass = 1;    % Passband Weight
Wstop = 1.5;  % Stopband Weight

% Calculate the coefficients using the FIRLS function.
b  = firls(N, [0 Fpass Fstop Fs/2]/(Fs/2), [1 1 0 0], [Wpass Wstop]);
Hd = dfilt.dffir(b);

% [EOF]
