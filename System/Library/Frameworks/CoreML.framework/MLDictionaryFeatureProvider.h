/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_ML58*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2 ;
-(id)initWithFeatureProvider:(id)arg1 ;
-(id)initWithFeatureValueDictionary:(id)arg1 ;
@end

