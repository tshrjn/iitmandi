function y = f(x); y = x; 
    endfunction
function y = g(x); y = x.^2;
    endfunction
function y = h(x); y = x.^3;
    endfunction
 x = [1:5]
plot(x ,x ,x ,x.^2 ,x ,x.^3 ) ;
legend('y=x','y=x.^2','y=x.^5');
xtitle('algebric functions','x','y')

