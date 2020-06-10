/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableDictionary, SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject {

	double _timePreviousUpdate;
	SKCRenderer* _skcRenderer;
	NSMutableDictionary* _viewRenderOptions;
	SKLabelNode* _statsLabel;
	double _prevViewAspect;
	unsigned _spritesRendered;
	unsigned _spritesSubmitted;
	int _frames;
	unsigned _prevSpritesRendered;
	unsigned _prevSpritesRenderedSubmitted;
	double _timeBeginFrameCount;
	float _fps;
	BOOL _hasRenderedOnce;
	BOOL _hasRenderedForCurrentUpdate;
	BOOL _isInTransition;
	BOOL _disableInput;
	SKScene* _scene;
	float _prevBackingScaleFactor;
	BOOL showsFPS;
	BOOL showsNodeCount;
	double _backingScaleFactor;
	CGRect _bounds;

}

@property (nonatomic,retain) SKScene * scene;                        //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) CGRect bounds;                          //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double backingScaleFactor;              //@synthesize backingScaleFactor=_backingScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL showsFPS; 
@property (assign,nonatomic) BOOL showsDrawCount; 
@property (assign,nonatomic) BOOL showsNodeCount; 
@property (assign,nonatomic) BOOL showsPhysics; 
@property (assign,nonatomic) BOOL showsFields; 
@property (assign,nonatomic) BOOL ignoresSiblingOrder; 
+(id)rendererWithContext:(id)arg1 options:(id)arg2 ;
+(void)setPrefersOpenGL:(BOOL)arg1 ;
+(id)rendererWithDevice:(id)arg1 options:(id)arg2 ;
+(int)getOpenGLFramebuffer:(id)arg1 ;
+(void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_update:(double)arg1 ;
-(CGRect)bounds;
-(void)setScene:(SKScene *)arg1 ;
-(SKScene *)scene;
-(id)_scene;
-(CGSize)pixelSize;
-(void)setBounds:(CGRect)arg1 ;
-(void)render:(BOOL)arg1 ;
-(void)setupContext;
-(double)_fps;
-(void)_initialize;
-(void)updateAtTime:(double)arg1 ;
-(void)renderToFramebuffer:(int)arg1 shouldClear:(BOOL)arg2 ;
-(void)renderToTexture:(id)arg1 commandQueue:(id)arg2 ;
-(void)renderWithEncoder:(id)arg1 pass:(id)arg2 commandQueue:(id)arg3 ;
-(void)setBackingScaleFactor:(double)arg1 ;
-(void)settingsForTransition:(id)arg1 atTime:(double)arg2 renderIncomingToTexture:(BOOL*)arg3 renderOutgoingToTexture:(BOOL*)arg4 renderIncomingToScreen:(BOOL*)arg5 renderOutgoingToScreen:(BOOL*)arg6 ;
-(void)renderTransition:(id)arg1 withInputTexture:(id)arg2 outputTexture:(id)arg3 time:(float)arg4 encoder:(id)arg5 pass:(id)arg6 commandQueue:(id)arg7 ;
-(void)renderTransition:(id)arg1 withInputTexture:(unsigned)arg2 outputTexture:(unsigned)arg3 inputTextureSize:(CGSize)arg4 outputTextureSize:(CGSize)arg5 time:(float)arg6 ;
-(void)setShowsSpriteBounds:(BOOL)arg1 ;
-(void)setShowsFPS:(BOOL)arg1 ;
-(void)setShowsNodeCount:(BOOL)arg1 ;
-(1)_getDestBounds;
-(1)_getViewport;
-(SCD_Struct_SK4)_getMatrix;
-(id)_getOptions;
-(void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned)arg3 outputTexture:(unsigned)arg4 inputTextureSize:(CGSize)arg5 outputTextureSize:(CGSize)arg6 time:(float)arg7 ;
-(id)initWithSKCRenderer:(SKCRenderer*)arg1 ;
-(void)setShowsDrawCount:(BOOL)arg1 ;
-(void)setShowsQuadCount:(BOOL)arg1 ;
-(void)set_showsCulledNodesInNodeCount:(BOOL)arg1 ;
-(void)set_showsGPUStats:(BOOL)arg1 ;
-(void)set_showsCPUStats:(BOOL)arg1 ;
-(void)set_showsCoreAnimationFPS:(BOOL)arg1 ;
-(void)set_showsTotalAreaRendered:(BOOL)arg1 ;
-(void)setShowsPhysics:(BOOL)arg1 ;
-(void)setShowsFields:(BOOL)arg1 ;
-(double)backingScaleFactor;
-(void)setIgnoresSiblingOrder:(BOOL)arg1 ;
-(BOOL)ignoresSiblingOrder;
-(BOOL)showsSpriteBounds;
-(BOOL)showsFPS;
-(BOOL)showsNodeCount;
-(BOOL)showsQuadCount;
-(BOOL)showsDrawCount;
-(BOOL)showsPhysics;
-(void)set_showsOutlineInterior:(BOOL)arg1 ;
-(BOOL)_showsOutlineInterior;
-(BOOL)showsFields;
-(void)set_showsSpriteBounds:(BOOL)arg1 ;
-(BOOL)_showsSpriteBounds;
-(void)set_shouldCenterStats:(BOOL)arg1 ;
-(BOOL)_shouldCenterStats;
-(BOOL)_showsCoreAnimationFPS;
-(BOOL)_showsCPUStats;
-(BOOL)_showsGPUStats;
-(BOOL)_showsCulledNodesInNodeCount;
-(BOOL)_showsTotalAreaRendered;
-(void)_showAllStats;
-(int)_spriteRenderCount;
-(int)_spriteSubmitCount;
@end

