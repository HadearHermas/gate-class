#include <iostream>
using namespace std;

class Gate
{
	private:
		bool * input;
		int n;
	public:
		//NOI : Number of inputs
		Gate(int NOI):n(NOI)
		{
		  // input[n];
             /*
            for(int i=0;i<n;i++)
            {
                input[i]=false;
            }*/

		}
		//sets the input with index "ind" to the value "value"
		void SetInput(int ind,bool value)
		{
             input[ind]=value;
		}
		//returns the value of input with index "ind"
		bool GetInput(int ind)
		{
               return input[ind];
		}
		//returns the total number of inputs
		int GetNumberOfInputs()
		{
           return n;
		}
};

//An "OR" gate with NOI input
//It stores no more data
class OR : public Gate
{
public:
	//NOI : Number of inputs
	//Constructor that make a "Gate" with NOI inputs
	OR(int NOI):Gate(NOI)
	{}
	//function that return the output of the Gate
	bool output()
	{ int i=0;
	  bool ret_value=false;
	    for(i=0;i<GetNumberOfInputs();i++)
        {
            if(GetInput(i)==1)
            {
                ret_value=true;
                break;
            }

        }
        return ret_value;
	}
};
//An "AND" gate with NOI input
//It stores no more data
class AND : public Gate
{
public:
	//NOI : Number of inputs
	//Constructor that make a "Gate" with NOI inputs
	AND(int NOI):Gate(NOI)
	{}
	//function that return the output of the Gate
	bool output()
	{int i=0;
	 bool ret_val=true;
	 for(i=0;i<GetNumberOfInputs();i++)
     {
       if(GetInput(i)==0)
            {
                ret_val=false;
                break;
            }
     }

	  return ret_val;
	}
};
//A "NOT" gate
//It stores no more data
//Remember that it has just one input and take care that it privately inherited Gate
class NOT : private Gate
{
public:
	//Constructor that make a "Gate" with 1 input
	NOT():Gate(1)
	{}
	// function to set the value of the gate input
	void SetInput(bool value)
	{   bool b;
	    if(value==1)
        {
            b=1;
           Gate::SetInput(0,true);
        }

	   else
       {
           b=0;
          Gate::SetInput(0,false);
       }


	}
	// function to return the value of the gate input
	bool GetInput()
	{
	    bool ret_val;
       if(Gate::GetInput(0)==0)
         ret_val=false;
       else
        ret_val=true;
       return ret_val;
	}
	// function to return the value of the gate output
	bool output()
	{
	    bool ret_val;
	    if(Gate::GetInput(0)==1)
        ret_val=false;
       else
        ret_val=true;
       return ret_val;

	}
};
int main()
{
    int t;
    int count=0;
    NOT x1;
    NOT z1;
    NOT y2;
    AND and1(3);
    AND and2(3);
    OR or1(2);
    bool x=x1.output();


    and1.SetInput(0,x);
    and1.SetInput(1,1);
    cout<<"hello";
   // and1.SetInput(2,z1.output());
   // cout<<"hello";
/*
    and2.SetInput(0,1);
    and2.SetInput(1,y2.output());
    and2.SetInput(2,1);

    or1.SetInput(0,and1.output());
    or1.SetInput(1,and2.output());

   bool out= or1.output();
   cout<<out;*/
    return 0;
}
