#include <iostream>
using namespace std;

class Time{
    private:
        int h;
        int m;
        int s;
    public:
        void ShowTime(void){
            cout<<"\n"<<h<<":"<<m<<":"<<s;
        }

        void setTime(int hh,int mm, int ss){
            h=hh;
            m=mm;
            s=ss;
        }

        void normalize(void){
            //To normalis time. ex 3hr:99min:88sec can be normalised to 4hr:40min;28sec
            // 3:99:88 ->>  3:60+39:60+28 we know 1hr=60min,1min=60sec
            h=h+m/60;
            //to get hour part from min value by dividing 60 because 60min=1hr
            m=m+s/60;
            //To get min part from sec value.
            // sec=88, 88/60=1min(we got min here from sec, we will add this to min), now
            //our remainder is left 88sec=(60sec or 1 min)+28sec and sec%60 for rest part
            m=m%60;
            s=s%60;
        }

        Time add(Time ob){
            //getting one object directly and one from arguement
            //creted a object to store and return the result
            Time temp;
            temp.s = s+ob.s;
            temp.m = m+ob.m;
            temp.h = h+ob.h;
            //To normailize the total sum of time
            temp.normalize();
            return temp;
            //we can acess s,h,m directly beacuse we called this function
            //from that object in line no 59
        }


};

int main(){
    Time obj,obj1,obj2;
    obj.setTime(3,66,78);
    obj1.setTime(3,40,50);
    cout<<"obj Non-normailised form:"<<endl;
    obj.ShowTime();
    obj.normalize();
    cout<<"Normalised Time:"<<endl;
    obj.ShowTime();
    //Here adding obj1 and obj2 obj.setTime(3,66,78);
    //obj1.setTime(3,40,50); and assigning it to obj3
    obj2=obj.add(obj1);
    obj2.ShowTime();
    return 0;
}
