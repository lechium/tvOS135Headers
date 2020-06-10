/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(id)transposePropertyKeysByEntityKey:(id)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3 ;
-(id)initWithPropertyKeysByEntityKey:(id)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
@end

