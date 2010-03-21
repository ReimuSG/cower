/*
 *  curlhelper.h
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CURLHELPER_H
#define _CURLHELPER_H

struct write_result {
    char *data;
    int pos;
};

//static size_t write_response(void *ptr, size_t size, size_t nmemb, void *stream);
char *curl_get_json(int, const char*);

#endif /* _CURLHELPER_H */