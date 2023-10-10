#          =======================================================================
#          =                   Code Written By : The_logical77                   =
#          =======================================================================
#          =                                                                     =
#          =      CodeForces Id: https://codeforces.com/profile/The_logical77    =
#          =      CodeChef Id:   https://www.codechef.com/users/the_logical77    =
#          =                                                                     =
#          =======================================================================


mag = int(input())
Op = 1
prev = int(input())
for i in range(1, mag):
    s = int(input())
    if prev != s:
        prev = s
        Op += 1

print(Op)
