Algarithm sum (A,n)
{
    s=0; ---------1
    for(int i=0;i<n;i++) ------- n+1
    {
        s=s+A(i); -------n
    }
    return 0; -------1
    
}
/*
 Note: This code does not run 

 f(n)=1+n+1+n+1
     =2n+3
 O(n)

loop analysis:
If n=5

i check result
0 yes   true
1 yes   true
2 yes   true
3 yes   true
4 yes   true    
5 yes   true
6 yes   false
After find any false condition 
the loop stop checking the condition that means the code exicute stop

*/