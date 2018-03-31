#include<iostream>
#include<stdlib.h>
using namespace std;


class battle_equipment
{
	protected:
	  int Life;
	  int Defence;
	  int Attack_Power;
	  char Name;
	  enum Flying_Mode{Stealth,Offensive,Defensive};
	  int Battery_Life;
	  double Attack;
	  double Dodge;
	  double Recharge;
	  int damage;
	  int speed;
	public:
	 setLife(int p);
	 getLife(return p);
	 setDefence(int p);
	 getDefence(return p);	 
	 setAttack_Power(int p);
	 getAttack_Power(return p);
	 setName(char p);
	 getName(return p);
	 setFlying_Mode(int p);
	 getFlying_Mode(return p);
	 setBettery_Life(int p);
	 getBettery_Life(return p);
	 setAttack(double p);
	 getAttack(return p);
	 setDodge(double p);
	 getDodge(double p);
	 setRecharge(double p);
	 getRecharge(return p);
	 setdamage(int p);
	 getdamage(return p);
	 setspeed(int p);
	 getspeed(return p);
	 
	 
};
  class War_Model: public battle_equipment
  {
  	public:
  		double Attack_Power
  		{
  			Attack_Power*2;
  			10*100/Life;
  			Attack+=10 damage;
  			
		  }
  		
  		
  };
  class Schnell Model: public battle_equipment
  {
  	 int speed;
  	 Dodge*0.092;
  	 Attack-=5 damage;
  	 
  };
  class Peaceful Model: public battle_equipment
  {
  	Life*2;
  	dodge=0;
  	
  };
  
  
