/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {

	id _source;
	id _destination;
	NSString* _label;

}

@property (nonatomic,retain) id source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(id)arg1 ;
-(id)source;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDestination:(id)arg1 ;
-(id)destination;
-(void)connect;
-(void)connectForSimulator;
@end

