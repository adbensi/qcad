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

include("../ModifyExamples.js");

/**
 * This action changes the font of all (selected) text entities to 'Arial'.
 */
function ExChangeFontToArial(guiAction) {
    ModifyExamples.call(this, guiAction);
}

ExChangeFontToArial.prototype = new ModifyExamples();

ExChangeFontToArial.prototype.beginEvent = function() {
    ModifyExamples.prototype.beginEvent.call(this);

    var di = this.getDocumentInterface();
    var document = this.getDocument();

    var op = new RModifyObjectsOperation();

    var ids;
    if (document.hasSelection()) {
        ids = document.querySelectedEntities();
    }
    else {
        // all entities on all blocks:
        ids = document.queryAllEntities(false, true);
    }

    for (var i=0; i<ids.length; i++) {
        var id = ids[i];
        var entity = document.queryEntity(id);

        if (isTextEntity(entity)) {
            entity.setFontName("Arial");
            entity.update();
            op.addObject(entity);
        }
    }

    di.applyOperation(op);

    this.terminate();
};

ExChangeFontToArial.init = function(basePath) {
    var action = new RGuiAction("Set font to Arial", RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setRequiresSelection(false);
    action.setScriptFile(basePath + "/ExChangeFontToArial.js");
    action.setSortOrder(100);
    EAction.addGuiActionTo(action, ModifyExamples, true, false, false);
};
