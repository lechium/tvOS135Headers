/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PCSAccountManager : NSObject {

	NSString* _dsid;

}

@property (retain) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(unsigned long long)accountStatus;
-(id)initWithDSID:(id)arg1 ;
@end
