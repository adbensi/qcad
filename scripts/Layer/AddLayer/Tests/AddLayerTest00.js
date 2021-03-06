/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
// Auto generated by Testing Dashboard
// File        : scripts/Layer/AddLayer/Tests/AddLayerTest02.js
// Timestamp   : 2011-03-16 16:40:16
// Description : scripts/Layer/AddLayer/Tests/AddLayerTest02.js

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function AddLayerTest00() {
    TdbTest.call(this, 'scripts/Layer/AddLayer/Tests/AddLayerTest00.js');
}

AddLayerTest00.prototype = new TdbTest();

AddLayerTest00.prototype.test00 = function() {
    qDebug("AddLayerTest00.js:", "test00(): dialogs cannot be tested at the moment");
    return;
    
    qDebug('running AddLayerTest00.test00()...');
    this.setUp();
    this.dlgStart();
    this.dlgAppendCode('var map = new Map()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/LayerName', 'layer 1')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Color', new RColor(255, 0, 0, 255) )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Lineweight', 25)");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Linetype', new RLinetype(null, 'CONTINUOUS') )");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    TdbTest.clickOnWidget('MainWindow::LayerDock::LayerWidget::btAdd');
    this.dlgStart();
    this.dlgAppendCode('var map = new Map()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/LayerName', 'layer 2')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Color', new RColor(255, 255, 0, 255) )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Lineweight', 25)");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Linetype', new RLinetype(null, 'CONTINUOUS') )");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    TdbTest.clickOnWidget('MainWindow::LayerDock::LayerWidget::btAdd');
    this.verifyDrawing('AddLayerTest00_000.dxf');
    this.tearDown();
    qDebug('finished AddLayerTest00.test00()');
};

