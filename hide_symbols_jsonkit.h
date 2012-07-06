#ifndef JKPREFIX
#define JKPREFIX JK_HIDDEN_
#endif

#define JKPASTER(x,y) x ## y
#define JKEVALUATOR(x,y) JKPASTER(x,y)
#define JKP(sym) JKEVALUATOR(JKPREFIX, sym)

#define JSONDecoder JKP(JSONDecoder)
#define JSONKitDeserializing JKP(JSONKitDeserializing)
#define JSONKitSerializing JKP(JSONKitSerializing)
#define JKArray JKP(JKArray)
#define JKDictionaryEnumerator JKP(JKDictionaryEnumerator)
#define JKDictionary JKP(JKDictionary)
#define JKMutableDictionary JKP(JKMutableDictionary)
#define JKSerializer JKP(JKSerializer)
#define JKMutableArray JKP(JKMutableArray)
#define jk_collectionClassLoadTimeInitialization JKP(jk_collectionClassLoadTimeInitialization)

