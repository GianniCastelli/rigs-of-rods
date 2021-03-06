/*
    This source file is part of Rigs of Rods
    Copyright 2005-2012 Pierre-Michel Ricordel
    Copyright 2007-2012 Thomas Fischer

    For more information, see http://www.rigsofrods.org/

    Rigs of Rods is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 3, as
    published by the Free Software Foundation.

    Rigs of Rods is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Rigs of Rods. If not, see <http://www.gnu.org/licenses/>.
*/

#include "CameraBehaviorFixed.h"

#include "Application.h"

#include "GUIManager.h"
#include "GUI_GameConsole.h"
#include "Language.h"

using namespace Ogre;
using namespace RoR;

void CameraBehaviorFixed::activate(const CameraManager::CameraContext &ctx, bool reset /* = true */)
{
    RoR::App::GetConsole()->putMessage(Console::CONSOLE_MSGTYPE_INFO, Console::CONSOLE_SYSTEM_NOTICE, _L("Fixed camera"), "camera_link.png", 3000);
    RoR::App::GetGuiManager()->PushNotification("Notice:", _L("Fixed camera"));
}
