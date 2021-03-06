/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode {

	VNClassifyImageAestheticsRequest* __imageAestheticsRequest;

}

@property (nonatomic,retain) VNClassifyImageAestheticsRequest * _imageAestheticsRequest;              //@synthesize _imageAestheticsRequest=__imageAestheticsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)evaluate:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(VNClassifyImageAestheticsRequest *)_imageAestheticsRequest;
-(void)set_imageAestheticsRequest:(VNClassifyImageAestheticsRequest *)arg1 ;
@end

