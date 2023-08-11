/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/
#include<stdio.h>

int main()
{
    int input ;
    printf( "Input :\n" ) ;
    scanf( "%d", &input ) ;

    if ( input >= 0 )
    {
        printf( "Positive" ) ;
    }
    else if ( input < 0 )
    {
        printf( "Negative" ) ;
    }
    
    return 0;
}
