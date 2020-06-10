/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASFAsn1Token, NSString;

@interface ASFAsn1ReceiptIAPToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	ASFAsn1Token* mContentToken;

}

@property (readonly) ASFAsn1Token * contentToken; 
@property (readonly) unsigned long long integerValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
+(id)readFromBuffer:(const char*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSString *)stringValue;
-(unsigned long long)integerValue;
-(ASFAsn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
@end

