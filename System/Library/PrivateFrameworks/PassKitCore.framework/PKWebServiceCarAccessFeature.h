/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKWebServiceRegionFeature.h>

@class NSArray;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {

	BOOL _allowSharing;
	BOOL _allowSharingToWatch;
	NSArray* _supportedTerminals;

}

@property (nonatomic,readonly) BOOL allowSharing;                              //@synthesize allowSharing=_allowSharing - In the implementation block
@property (nonatomic,readonly) BOOL allowSharingToWatch;                       //@synthesize allowSharingToWatch=_allowSharingToWatch - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedTerminals;              //@synthesize supportedTerminals=_supportedTerminals - In the implementation block
-(id)initWithDictionary:(id)arg1 region:(id)arg2 ;
-(id)localizedNameForIssuerWithIdentifier:(id)arg1 ;
-(BOOL)allowSharing;
-(BOOL)allowSharingToWatch;
-(NSArray *)supportedTerminals;
@end

