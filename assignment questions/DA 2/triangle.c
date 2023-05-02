/*
Get the three angles of a triangle as input.

find the count of the type of the triangle.

Continue the process for 5 times.

If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.

Acute Angled Triangle (all three angles less than 90°)

Right-Angled Triangle (one angle that measures exactly 90°)

Obtuse Angled Triangle (one angle that measures more than 90°)

Sample i/p:

60

70

50

40

50

90

40

40

100

30

30

120

90

60

30

Sample o/p:

Acute Angled Triangle: 1

Right Angled Triangle: 2

Obtuse Angled Triangle: 2

Wrong Entries: 0

 

 Second Sample i/p:

60

70

50

40

50

90

40

40

100

30

30

120

90

90

30

Wrong Entry try again

90

30

60

Sample o/p:

Wrong Entry try again

Acute Angled Triangle: 1

Right Angled Triangle: 2

Obtuse Angled Triangle: 2

Wrong Entries: 1
*/

#include <stdio.h>

int main() {
   
    int a,b,c;
    for(int i=0;i<5;i++){
    printf("Enter the angles of the traingle\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int sum=a+b+c;
    int acute=0,right=0,obtuse=0;
    if(sum!=180){
        printf("Wrong input\n");
    }
    else{
        if(a<90 &&b<90 &&c<90){
            acute+=1;
        }
        else if(a==90 && b==90 &c==9){
            right+=1;
        }
        else{
            obtuse+=1;
        }
    }

    }
    printf("No. of acute angles triangle= %d",acute);
    printf("No. of right angles triangle= %d",right);
    printf("No. of obtuse angles triangle= %d",obtuse);
    return 0;
}
