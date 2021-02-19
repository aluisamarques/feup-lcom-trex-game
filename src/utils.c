#include "utils.h"
#include <stdint.h>

int min(int x, int y)
{
  return x<=y ? x:y;
}

int max(int x, int y)
{
  return x>=y ? x:y;
}

int(util_get_LSB)(uint16_t val, uint8_t *lsb) {

  val = val & 0x00FF;  //retirar os bits nao necessarios

  *lsb = (uint8_t) val; //transformar numa variavel de 8 bits

  return 0;
}

int(util_get_MSB)(uint16_t val, uint8_t *msb) {

  val = val >> 8;  //shift para a direita

  *msb = (uint8_t ) val; //transformar numa variavel de 8 bits

  return 0;
}


int(util_sys_inb)(int port, uint8_t *value) {

  uint32_t temp;

  sys_inb(port, &temp); //read the value in the port

  *value = (uint8_t) temp; //write the value on the adress
  return 0;
}


