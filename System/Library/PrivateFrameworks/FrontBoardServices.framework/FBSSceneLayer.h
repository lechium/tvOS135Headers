/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	CAContext* _context;
	double _level;

}

@property (getter=_context,nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_context;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)_unsafe_captureLevel;
-(double)_unsafe_level;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 ;
-(id)_succinctDescription;
-(BOOL)isCAContextLayer;
-(BOOL)isExternalSceneLayer;
@end

