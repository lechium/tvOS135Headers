/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSVFamilyAccountPair : NSObject {

	unsigned long long _downloaderAccountIdentifier;
	unsigned long long _familyIdentifier;
	unsigned long long _purchaserAccountIdentifier;

}

@property (nonatomic,readonly) unsigned long long downloaderAccountIdentifier;              //@synthesize downloaderAccountIdentifier=_downloaderAccountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long familyIdentifier;                         //@synthesize familyIdentifier=_familyIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long purchaserAccountIdentifier;               //@synthesize purchaserAccountIdentifier=_purchaserAccountIdentifier - In the implementation block
-(id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)downloaderAccountIdentifier;
-(unsigned long long)familyIdentifier;
-(unsigned long long)purchaserAccountIdentifier;
@end

