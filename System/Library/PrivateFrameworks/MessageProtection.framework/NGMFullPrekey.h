/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject {

	DHKey* _dhKey;
	NGMPublicPreKey* _publicPrekey;

}

@property (nonatomic,readonly) DHKey * dhKey;                               //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NGMPublicPreKey * publicPrekey;              //@synthesize publicPrekey=_publicPrekey - In the implementation block
-(id)description;
-(BOOL)delete;
-(DHKey *)dhKey;
-(NGMPublicPreKey *)publicPrekey;
-(id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2 ;
-(id)initWithPBPrekey:(id)arg1 error:(id*)arg2 ;
-(id)pbDevicePrekey;
@end
