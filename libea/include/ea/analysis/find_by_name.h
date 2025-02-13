/* find_by_name.h
 *
 * This file is part of EALib.
 *
 * Copyright 2014 David B. Knoester.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _EA_ANALYSIS_FIND_BY_NAME_H_
#define _EA_ANALYSIS_FIND_BY_NAME_H_

#include <ea/analysis.h>
#include <ea/comparators.h>

namespace ealib {
    namespace analysis {
        
        //! Returns an iterator to the dominant (most fit) individual in ea.
        template <typename EA>
        typename EA::iterator find_by_name(long ind_name, EA& ea) {
            for(typename EA::iterator i=ea.begin(); i!=ea.end(); ++i) {
                if(get<IND_NAME>(*i) == ind_name) {
                    return i;
                }
            }
        }
        
    } // analysis
} // ea

#endif
