/******************************************************************************
 * File Name: ncurses.h
 * Created by: Stephen M. Reaves
 * Date Last Modified:
 *
 * Summary:
 *
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <ncurses.h>

#include "window.h"

using namespace std;

#ifndef CUST_NCURSES_H
#define CUST_NCURSES_H

class Ncurses : public Window{
  public:
    Ncurses();
    virtual ~Ncurses();
};

#endif /* CUST_NCURSES_H */

