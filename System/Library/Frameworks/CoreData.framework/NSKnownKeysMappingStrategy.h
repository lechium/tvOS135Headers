/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) id* keys; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)length;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id*)keys;
-(id)initForKeys:(id)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
@end
