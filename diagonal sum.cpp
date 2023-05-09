#include<iostream>
using namespace std;
class matrix
{
    int i,j,a[10][10],sum,n;
 
public :
    void getmatrix();
    void sumdiagonal();
    void displaymartrix();
};
 void matrix::getmatrix()
 {
 	cout<<"enter order of matrix :";
 	cin>>n;
 	cout<<"enter matrix :";
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			cin>>a[i][j];
		 }
	 }
 }
 void matrix::sumdiagonal()
 {
 	sum=0;
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			sum=sum+a[i][j];
		 }
	 }
	cout<<"sum of diagonal ="<<sum;
 }
void matrix::displaymartrix()
{
	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			cout<<a[i][j]<<"\t";
 	    }
 	cout<<"\n";
    }
}
int main()
{
	matrix m;
	m.getmatrix();
	m.displaymartrix();
	m.sumdiagonal();
	return 0;	
}
