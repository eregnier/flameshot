// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#include "capturecontext.h"
#include "capturerequest.h"
#include "controller.h"

QPixmap CaptureContext::selectedScreenshotArea() const
{
    if (selection.isNull()) {
        return screenshot;
    } else {
        return screenshot.copy(selection);
    }
}

CaptureRequest* CaptureContext::request()
{
    return &*Controller::getInstance()->requests().find(requestId);
}

CaptureRequest* CaptureContext::request() const {
    return &*Controller::getInstance()->requests().find(requestId);
}
