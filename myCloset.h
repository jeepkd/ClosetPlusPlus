/******************************************************************************
 * File Name: myCloset.h
 * Created by: Stephen M. Reaves
 * Date Last Modified:
 *
 * Summary:
 *
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <ncurses.h>
#include <cstring>

#include "shirt.h"
#include "pants.h"
#include "belt.h"
#include "socks.h"
#include "shoes.h"
#include "ncurses.h"
#include "vulkan.h"
#include "window.h"

using namespace std;

#ifndef MYCLOSET_H
#define MYCLOSET_H

const string kDummyClosetName = "Fake Closet Name";

class Closet {
  public:
    //Constructors and Destructors
    Closet();
    virtual ~Closet();

    //General Functions
    string ToXML() const;
    string ToString() const;
    string StoreCloset() const;
    void ImportCloset(string filename);
    void MakeCloset();

    string GetClosetName();

  private:
    //Variables
    string closet_name_ = kDummyClosetName;
    map<int, Shirt> shirt_map_;
    map<int, Pants> pants_map_;
    map<int, Socks> socks_map_;
    map<int, Shoes> shoes_map_;
    map<int, Belt> belt_map_;
#ifdef VULKAN
    Vulkan window;
#else
    Ncurses window;
#endif

    //Private Functions
    Shirt AddShirt();
    Pants AddPants();
    Socks AddSocks();
    Shoes AddShoes();
    Belt AddBelt();
    
    int AssignID(string type);
    //static string Window(string message);
    //static char WindowChar(string message);

};

#endif /* MYCLOSET_H */

