/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMBModelProperties
@required
+(BOOL)hmbShouldLogPrivateInformation;
+(void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
-(BOOL)hmbPropertyWasSet:(id)arg1;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2;
-(id)hmbPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2;
-(void)hmbUnsetPropertyNamed:(id)arg1;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsAvailable:(id)arg1;

@end

