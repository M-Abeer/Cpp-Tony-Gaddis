// Star Search
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
double getJudgeData();
void calScore(double,double,double,double,double);
double findLowest(double,double,double,double,double);
double findHighest(double,double,double,double,double);
double lowestNum(double,double,double,double,double);
double highestNum(double,double,double,double,double);
int main()
{
	double a,b,c,d,e;
	a=getJudgeData();
	b=getJudgeData();
	c=getJudgeData();
	d=getJudgeData();
	e=getJudgeData();
	
	calScore(a,b,c,d,e);
	
	// Program Terminate
	return 0;
}
double getJudgeData()
{
	double Score;
	cout<<"Judge Score"<<endl;
	cin>>Score;
	return Score;
}

void calScore(double score1,double score2,double score3,double score4,double score5)
{
	double sum,
		   highest,
		   lowest,
		   average;
	   	   lowest  = findLowest(score1, score2, score3, score4, score5),
           highest = findHighest(score1, score2, score3, score4, score5),
           average,
           sum = score1 + score2 + score3 + score4 + score5;
 			sum=score1+score2+score3+score4+score5;
 			sum-=lowest;
 			sum-=highest;
 			average=sum/3;
			 
	// Display Report
	cout<<"Lowest Number is "<<lowest<<endl;
	cout<<"Highest Number is "<<highest<<endl;
	cout<<"Average is "<<average<<endl;   
 			   
 	// 		   
}
double findLowest(double score1,double score2,double score3,double score4,double score5)
{
	double Lowest;
	
	Lowest=lowestNum(score1,score2,score3,score4,score5);
	Lowest=lowestNum(score2,score3,score4,score5,score1);
	Lowest=lowestNum(score3,score4,score5,score1,score2);
	Lowest=lowestNum(score4,score5,score1,score2,score3);
	Lowest=lowestNum(score5,score1,score2,score3,score4);
		
}

/********************************************************
 * Definition of lowestNum():                           *
 * lowestNum() uses an if statmenent to find the lowest *
 * number.                                              *
 ********************************************************/
double lowestNum(double score1,
                 double score2,
                 double score3,
                 double score4,
                 double score5)
{
    double lowestNum;
    if (score1 <= score2)
    {
        if (score1 <= score3)
        {
            if (score1 <= score4)
            {
                if (score1 <= score5)
                {
                    lowestNum = score1;
                }
            }
        }
    }
    return lowestNum;
}

/************************************************
 * Definition for findHighest():                *
 * findHighest() finds and return the highest   *
 * of the five scores passed to it.             *
 ************************************************/
double findHighest(double score1,
                   double score2,
                   double score3,
                   double score4,
                   double score5)
{
    double highest;

    highest = highestNum(score1, score2, score3, score4, score5);
    highest = highestNum(score2, score3, score4, score5, score1);
    highest = highestNum(score3, score4, score5, score1, score2);
    highest = highestNum(score4, score5, score1, score2, score3);
    highest = highestNum(score5, score1, score2, score3, score4);

    return highest;
}

/********************************************************
 * Definition of highestNum():                          *
 * highestNum() uses an if statmenent to find the       *
 * highest number.                                      *
 ********************************************************/
double highestNum(double score1,
                  double score2,
                  double score3,
                  double score4,
                  double score5)
{
    double highestNum;

    if (score1 >= score2)
    {
        if (score1 >= score3)
        {
            if (score1 >= score4)
            {
                if (score1 >= score5)
                {
                    highestNum = score1;
                }
            }
        }
    }

    return highestNum;
}

	
