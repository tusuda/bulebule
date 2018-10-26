#ifndef __SOLVE_H
#define __SOLVE_H

#include "detection.h"
#include "eeprom.h"
#include "formatting.h"
#include "move.h"
#include "search.h"
#include "setup.h"

void explore(void);
#ifdef MMSIM_SIMULATION
void send_state(void);
#endif
void set_run_sequence(void);
void run(void);
void eeprom_save_maze(void);
void eeprom_load_maze(void);
void eeprom_reset_maze(void);
bool eeprom_maze_is_saved(void);

#endif /* __SOLVE_H */
