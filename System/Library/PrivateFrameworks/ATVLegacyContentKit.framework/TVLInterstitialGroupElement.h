/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, TVLXMLElement;

@interface TVLInterstitialGroupElement : TVLRootElement {

	NSArray* _interstitials;
	TVLXMLElement* _xml;

}

@property (nonatomic,retain) NSArray * interstitials;                   //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain,readonly) TVLXMLElement * xml;              //@synthesize xml=_xml - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLXMLElement *)xml;
@end

