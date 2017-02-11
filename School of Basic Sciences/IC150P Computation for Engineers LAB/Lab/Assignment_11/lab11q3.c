p = poly([25 10 1], 'x' ,'c')
disp (p)
y = roots(p)
disp (y)
x = [0.1:5]
plot (x , 25 + (10*x) + x.^2)  
legend('25 + (10*x) + x.^2')
xtitle('algebric functions','x','y')