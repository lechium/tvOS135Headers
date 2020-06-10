/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard;
@class NSArray, NSString;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	id<CRCard> _card;
	NSArray* _viewConfigurations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card;                                 //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                    //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(NSString *)providerIdentifier;
-(id<CRCard>)card;
-(id)initWithCard:(id)arg1 ;
-(NSArray *)viewConfigurations;
@end

