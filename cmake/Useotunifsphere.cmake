#                                               -*- cmake -*-
#
#  Useotunifsphere.cmake
#
#  Use otunifsphere in CMake files
#
#  Copyright 2005-2019 Airbus-EDF-IMACS-ONERA-Phimeca
#
#  This library is free software: you can redistribute it and/or modify
#  it under the terms of the GNU Lesser General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  along with this library.  If not, see <http://www.gnu.org/licenses/>.
#
#

add_definitions     ( ${OTUNIFSPHERE_DEFINITIONS} )
include_directories ( ${OTUNIFSPHERE_INCLUDE_DIRS} )
link_directories    ( ${OTUNIFSPHERE_LIBRARY_DIRS} )
