/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject {

	NSString* _character;
	SCNNode* _node;

}

@property (nonatomic,retain) NSString * character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,retain) SCNNode * node;                    //@synthesize node=_node - In the implementation block
+(id)characterWithCharacter:(id)arg1 node:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(NSString *)character;
-(void)setCharacter:(NSString *)arg1 ;
@end

