/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TVHSDMAPEntity <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long protocol; 
@property (nonatomic,copy,readonly) NSDictionary * attributeValues; 
@required
-(unsigned long long)type;
-(unsigned long long)protocol;
-(NSDictionary *)attributeValues;
-(id)attributeValueForCode:(id)arg1;
-(void)setAttributeValue:(id)arg1 forCode:(id)arg2;
-(void)prepopulateAttributeValues;

@end
