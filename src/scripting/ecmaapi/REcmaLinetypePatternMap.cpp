

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaLinetypePatternMap.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaLinetypePatternMap::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLinetypePatternMap*) 0)));
        protoCreated = true;
    }

    
        // primary base class QMap<QString,RLinetypePattern>:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QMap<QString,RLinetypePattern>*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QMap<QString,RLinetypePattern>
        REcmaHelper::registerFunction(&engine, proto, getQMap_QString_RLinetypePattern, "getQMap_QString_RLinetypePattern");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RLinetypePatternMap*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getPattern, "getPattern");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RLinetypePatternMap",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLinetypePatternMap::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypePatternMap(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RLinetypePatternMap
                    * cppResult =
                    new
                    RLinetypePatternMap
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypePatternMap(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaLinetypePatternMap::getQMap_QString_RLinetypePattern(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QMap<QString,RLinetypePattern>* cppResult =
                    qscriptvalue_cast<RLinetypePatternMap*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaLinetypePatternMap::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLinetypePatternMap"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLinetypePatternMap::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QMap<QString,RLinetypePattern>");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLinetypePatternMap::getPattern
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePatternMap::getPattern", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePatternMap::getPattern";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'RLinetypePattern'
    RLinetypePattern cppResult =
        RLinetypePatternMap::
       getPattern(a0);
        // return type: RLinetypePattern
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePatternMap.getPattern().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePatternMap::getPattern", context, engine);
            return result;
        }
         QScriptValue REcmaLinetypePatternMap::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLinetypePatternMap* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RLinetypePatternMap(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLinetypePatternMap::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLinetypePatternMap* self = getSelf("RLinetypePatternMap", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RLinetypePatternMap* REcmaLinetypePatternMap::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLinetypePatternMap* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLinetypePatternMap >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLinetypePatternMap.%1(): "
                        "This object is not a RLinetypePatternMap").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLinetypePatternMap* REcmaLinetypePatternMap::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLinetypePatternMap* selfBase = getSelf(fName, context);
                RLinetypePatternMap* self = dynamic_cast<RLinetypePatternMap*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLinetypePatternMap >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLinetypePatternMap.%1(): "
                    "This object is not a RLinetypePatternMap").arg(fName),
                    context);
            }

            return self;
            


        }
        