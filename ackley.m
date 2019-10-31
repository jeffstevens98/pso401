function y = ackley(x)%, dummy_num)

dim=size(x,2);
A=1/dim;
Omega=2*pi;
sum1=A.*sum((x .* x)')';
sum2=A.*sum((cos(Omega * x))')';
y = -20*exp(-0.2*sqrt(sum1))-exp(sum2)+20+exp(1);
return