#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

/*** Complete this program. ***/

int main()
{
    const int UNITS_PER_CAN = 3;
    const string INPUT_FILE_NAME = "counts.txt";
    int plant_count;
    ifstream input;
    input.open(INPUT_FILE_NAME);
    if (input.fail())
    {
        cout << "Failed to open " << INPUT_FILE_NAME << endl;
        return -1;
    }

    // Loop once for each number of plants read from the input file.
    // Stop when the number of plants is 0 or less.
    // During each loop, simulate Plan Near and Plan Far.
    do
    {
        input >> plant_count;

        // Plan Near

        cout << endl;
        cout << "==========================" << endl;
        cout << " Plan Near with " << plant_count << " plants" << endl;
        cout << "==========================" << endl;
        cout << endl;

        /*** Complete the code for Plan Near. ***/
        int current_position=0,UNITS_PER_CAN=3,water_amount_left=3,step=0,total=0,total_t1=0,
        complete=0,unwatered=plant_count;
          label: while(current_position != 0 )
                  {current_position--;step++;total=total+water_amount_left;}
                  if(current_position==0 && complete != plant_count)
          {water_amount_left=3;
            cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total<<endl;

          }
          while(current_position!=complete)
          {
            step=step+1;
          total=total+water_amount_left;
          current_position++;
        //  cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total<<endl;
          }
        while(complete < plant_count )
        {
        step=step+1;
        total=total+water_amount_left;
        water_amount_left--;
        current_position++;
        complete++;
        cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total<<endl;
        if(water_amount_left==0)
        goto label;
        }
        if(current_position==plant_count)
        {
          while(current_position != 0 )
                      {current_position--;step++;total=total+water_amount_left;}
                    cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total<<endl;
        }

        // Plan Far

        cout << endl;
        cout << "=========================" << endl;
        cout << " Plan Far with " << plant_count << " plants" << endl;
        cout << "=========================" << endl;
        cout << endl;
        cout << "Where      Cum. steps  Water amt.  Cum. step-units" << endl;
        cout << "---------  ----------  ----------  ---------------" << endl;

        /*** Complete the code for Plan Far. ***/

        current_position=0,UNITS_PER_CAN=3,water_amount_left=3,step=0,total_t1=0,complete=plant_count;
          label1:      while(current_position != 0 )
                      {current_position--;step++;total_t1=total_t1+water_amount_left;}
       if(current_position==0)
          {water_amount_left=3;
            cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total_t1<<endl;
          }

          while(current_position!=complete)
          {
            step=step+1;
          total_t1=total_t1+water_amount_left;
          current_position++;
          }
          cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total_t1<<endl;

        while(complete >0 )
        {
        step=step+1;    water_amount_left--;    current_position--;
        complete--;     total_t1=total_t1+water_amount_left;
        cout<<step<<"    "<<current_position<<"             "<<water_amount_left<<"  "<<total_t1<<endl;
        if(water_amount_left==0)
        goto label1;
        }

        // Which plan is better? Better means fewer step-units.
        cout << endl;
        cout << "*** With " << plant_count << " plants, ";
        if(total > total_t1)
        cout<<"plan far is better " <<total-total_t1 <<endl;
        else
           cout<<"plan near is better with " <<total_t1-total <<" fewer step units  "<<endl;
        /*** Complete the code to determine the better plan. ***/

    } while (plant_count > 0);

    return 0;
}
