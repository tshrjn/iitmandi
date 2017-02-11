A = [1 2 3 4 5 ; 1 2 3 4 5 ; 1 2 3 4 5 ; 1 2 3 4 5 ; 1 2 3 4 5]
B = [6 7 8 9 10 ; 6 7 8 9 10 ; 6 7 8 9 10 ; 6 7 8 9 10 ; 6 7 8 9 10]
C = A + B
D = A * B

disp (C)
disp (D)


E = [A(2,3) A(2,4) ; A(3,3) A(3,4)]

disp (E)

F = det (A)
G = det (B)

disp (F)
disp (G)


[L,U] = lu(A)
disp ([L,U])

