/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * E133Enums.h
 * Enums for use with E1.33
 * Copyright (C) 2013 Simon Newton
 */

#ifndef PLUGINS_E131_E131_E133ENUMS_H_
#define PLUGINS_E131_E131_E133ENUMS_H_

namespace ola {
namespace plugin {
namespace e131 {

// Table A-9 E1.33 Status Codes
enum E133StatusCode {
  SC_E133_ACK = 0x0000,
  SC_E133_RDM_TIMEOUT = 0x0001,
  SC_E133_RDM_INVALID_RESPONSE = 0x0002,
  SC_E133_BUFFER_FULL = 0x0003,
  SC_E133_UNKNOWN_UID = 0x0004,
  SC_E133_NONEXISTANT_ENDPOINT = 0x0005,
  SC_E133_WRONG_ENDPOINT = 0x0006,
  SC_E133_ACK_OVERFLOW_CACHE_EXPIRED = 0x0007,
  SC_E133_ACK_OVERFLOW_IN_PROGRESS = 0x0008,
  SC_E133_BROADCAST_COMPLETE = 0x0009,
};

}  // e131
}  // plugin
}  // ola
#endif  // PLUGINS_E131_E131_E133ENUMS_H_
