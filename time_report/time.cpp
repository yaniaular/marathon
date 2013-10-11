#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int num;
    string fecha, hora, unit;
    int Anio, Mes, Dia, Hora, Min, Seg;
    int a, me, d, h, mi, s;

    int timestamp;
    int m_s = 60;
    int m_mi = m_s*60;
    int m_h = m_mi*24;
    int m_d = m_h*7;
    int m_w = m_d*6;
    int m_mo = m_h * 365;
    int m_y = m_mo;

    cin >> num;

    while(num != 0){
        cin >> fecha;
        cin >> hora;
        sscanf(fecha.c_str(), "%d/%d/%d",&Mes,&Dia,&Anio);
        sscanf(hora.c_str(),"%d%*c%d%*c%d",&Hora,&Min,&Seg);
        
        //cout << "Dia: " << Dia << " Mes: " << Mes << " Anio " << Anio << endl;

        //cout << num << endl << fecha << " " << hora << endl;

        for(int i = 0; i < num; i++){
            
            cin >> fecha;
            sscanf(fecha.c_str(), "%d/%d/%d",&me,&d,&a);
            cin >> hora;
            sscanf(hora.c_str(),"%d%*c%d%*c%d",&h,&mi,&s);
            
            a = Anio - a;
            me = Mes - me;
            d = Dia - d;
            h = Hora - h;
            mi = Min - mi;
            s = Seg - s;
            
            cout << " Anios " << a;
            cout << ", Meses " << me;
            cout << ", Dias " << d;
            cout << ", Horas " << h;
            cout << ", Minutos " << mi;
            cout << ", Segundos " << s;
           
            timestamp = s + (mi*60) + (h*60*60) + (d*24*60*60) + (me*30*24*60*60) + (a*365*24*60*60); 

            cout << ", timestamp in sec: " << timestamp;

            if(timestamp < m_s){       unit = "second"; }
            else if(timestamp < m_mi){ unit = "minute"; timestamp /= m_s; }
            else if(timestamp < m_h){  unit = "hour"; timestamp /= m_mi; }
            else if(timestamp < m_d){  unit = "day"; timestamp /= m_h; }
            else if(timestamp < m_w){  unit = "week"; timestamp /= m_d; }
            else if(timestamp < m_mo){ unit = "month"; timestamp /= m_w; }
            else{                      unit = "year"; timestamp /= m_y; }
            
            //if(timestamp >= m_y){       timestamp /= m_y;  unit="year";
            //}else if(timestamp > m_mo){ timestamp /= m_mo; unit = "year"; 
            //}else if(timestamp > m_w){  timestamp /= m_w;  unit = "month";
            //}else if(timestamp > m_d){  timestamp /= m_d;  unit = "week";
            //}else if(timestamp > m_h){  timestamp /= m_h;  unit = "day";
            //}else if(timestamp > m_mi){ timestamp /= m_mi; unit = "hour";
            //}else if(timestamp >= m_s){  timestamp /= m_s;  unit = "minute";
            //}else { unit = "second";}
            if (timestamp > 1){
                unit += "s";
            }
            cout << ", res: "  << timestamp << " " << unit << " ago"<< endl;
    
        }
        cin >> num;
    }
        //cout << "Hora: " << Hora << " Min: " << Min << " Seg " << Seg << endl;
    return 0;
}
