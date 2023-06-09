![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/108508184/ab6c851c-42d2-4ed1-9f2b-0b8982e4b357)

## $\textcolor{green}{Codigo:}$


> __Note__ : Se agrega codigo en C++.

```c++

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP32CORE_BLE
#include <BLEDevice.h>  //LIBRERIA PARA BLUETOOTH LOW ENERGY CARGADA EN LA BIBLIOTECA DEL ARDUINO

#include <RemoteXY.h> //LIBRERIA RemoteXY CARGADA EN LA BIBLIOTECA DEL ARDUINO

// RemoteXY connection settings 
#define REMOTEXY_BLUETOOTH_NAME "RemoteXY_Oscar"    //NOMBRE DEL BLUETOOTH DEL ESP32


// RemoteXY configurate  -  CONFIGURACION REALIZADA SOBRE EL EDITOR DE RemoteXY - PARAMETROS DEL DASHBOARD
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 92 bytes
  { 255,2,0,0,0,85,0,16,94,1,129,0,9,4,44,9,232,84,69,83,
  84,32,76,69,68,0,129,0,17,21,27,6,1,76,69,68,32,82,111,106,
  111,0,129,0,17,60,26,6,6,76,69,68,32,65,122,117,108,0,10,48,
  23,30,15,15,135,1,31,79,78,0,31,79,70,70,0,10,48,23,70,15,
  15,135,1,31,79,78,0,31,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t pushSwitch_1; // =1 if state is ON, else =0 
  uint8_t pushSwitch_2; // =1 if state is ON, else =0 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_PUSHSWITCH_1 12 //DEFINE Y ASOCIA PIN CON GPIO12 DONDE ESTA COENCTADO LED ROJO
#define PIN_PUSHSWITCH_2 14 //DEFINE Y ASOCIA PIN CON GPIO14 DONDE ESTA CONECTADO LED AZUL


void setup() 
{
  RemoteXY_Init ();   //INICIA RemoteXY
  
  pinMode (PIN_PUSHSWITCH_1, OUTPUT); //CONFIGURA COMO SALIDA EL PIN 12 ASOCIADO AL LED ROJO
  pinMode (PIN_PUSHSWITCH_2, OUTPUT); //CONFIGURA COMO SALIDA EL PIN 14 ASOCIADO AL LED AZUL
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_PUSHSWITCH_1, (RemoteXY.pushSwitch_1==0)?LOW:HIGH); //MODIFICA ESTADO DE LA VARIABLEA ASOCIADA AL LED ROJO
  digitalWrite(PIN_PUSHSWITCH_2, (RemoteXY.pushSwitch_2==0)?LOW:HIGH); //MODIFICA ESTADO DE LA VARIABLEA ASOCIADA AL LED AZUL
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}
