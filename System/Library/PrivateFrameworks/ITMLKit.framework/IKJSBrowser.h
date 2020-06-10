/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBrowser.h>
@class NSDictionary;


@protocol IKJSBrowser <JSExport>
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double interitemSpacing; 
@property (nonatomic,retain) NSDictionary * maskInset; 
@required
-(void)present;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1;
-(double)interitemSpacing;
-(NSDictionary *)maskInset;
-(void)setInteritemSpacing:(double)arg1;
-(void)setMaskInset:(id)arg1;

@end


@class NSDictionary, IKAppBrowserBridge;

@interface IKJSBrowser : IKJSObject <IKJSBrowser> {

	double _cornerRadius;
	double _interitemSpacing;
	NSDictionary* _maskInset;
	IKAppBrowserBridge* _bridge;

}

@property (nonatomic,retain) IKAppBrowserBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                  //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,retain) NSDictionary * maskInset;                 //@synthesize maskInset=_maskInset - In the implementation block
-(void)present;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(IKAppBrowserBridge *)bridge;
-(void)setBridge:(IKAppBrowserBridge *)arg1 ;
-(double)interitemSpacing;
-(NSDictionary *)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(NSDictionary *)arg1 ;
@end

