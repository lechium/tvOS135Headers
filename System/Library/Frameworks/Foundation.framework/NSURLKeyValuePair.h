/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned long long hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)key;
-(id)value;
-(void)setKey:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
@end
