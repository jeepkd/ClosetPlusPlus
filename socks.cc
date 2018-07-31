#include "socks.h"
/******************************************************************************
 * File Name: socks.cc
 * Created by: Stephen M. Reaves
 * Date Last Modified:
 *
 * Summary:
 *
 */

/******************************************************************************
 * Constructor
 */
Socks::Socks() {}

Socks::Socks(int id, string name, string prim_color, string sec_color,
             string tert_color, string pattern) {
  this->id_ = id;
  this->name_ = name;
  this->primary_color_ = prim_color;
  this->secondary_color_ = sec_color;
  this->tertiary_color_ = tert_color;
  this->pattern_ = pattern;
}

/******************************************************************************
 * Deconstructor
 */
Socks::~Socks() {}

/******************************************************************************
 * Accessors and Mutators
 */

/******************************************************************************
 * General Functions
 */

/******************************************************************************
 * DEPRECATED
 *
 * Function 'ToXML'
 * Returns:
 *    XML representing the socks.
 */
string Socks::ToXML() const {
  string s = "";

  s += "  <Socks ID=" + to_string(this->id_) + ">\n";
  s += "    <Name>" + this->name_ + "</Name>\n";
  s += "    <Primary Color>" + this->primary_color_ + "</Primary Color>\n";
  s +=
      "    <Secondary Color>" + this->secondary_color_ + "</Secondary Color>\n";
  s += "    <Tertiary Color>" + this->tertiary_color_ + "</Tertiary Color>\n";
  s += "    <Pattern>" + this->pattern_ + "</Pattern>\n";
  s += "  </Socks>\n";

  return s;
}

/******************************************************************************
 * Function 'ToString'
 * Returns:
 *    'string' representing the socks.
 */
string Socks::ToString() const {
  string s = "\n";

  s += "Name: " + this->name_ + "\n";
  s += "ID:   " + to_string(this->id_);
  s += "\n";
  s += "  -> Primary Color:   " + this->primary_color_ + "\n";
  s += "  -> Secondary Color: " + this->secondary_color_ + "\n";
  s += "  -> Tertiary Color:  " + this->tertiary_color_ + "\n";
  s += "  -> Pattern:         " + this->pattern_ + "\n";

  return s;
}
