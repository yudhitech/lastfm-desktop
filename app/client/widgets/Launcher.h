/***************************************************************************
 *   Copyright 2005-2008 Last.fm Ltd.                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Steet, Fifth Floor, Boston, MA  02110-1301, USA.          *
 ***************************************************************************/

#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QWidget>
class ImageButton;


class Launcher : public QWidget
{
	Q_OBJECT

public:
	Launcher( QWidget* parent = 0 );

	virtual void paintEvent( QPaintEvent* );
	
private slots:
	void onRadioToggle();
	void onTunerHidden();

protected:
    struct {
        ImageButton* radio;
        ImageButton* friends;
        ImageButton* library;
        ImageButton* scrobble;
    } ui;
	
};

#endif //LAUNCHER_H