#include "Scene_Voxel.h"
#include "CoreUtilities.h"

/*********************************************************************************************************
C/D
/*********************************************************************************************************/
Scene_Voxel::Scene_Voxel()
{
}

Scene_Voxel::~Scene_Voxel()
{
}

/*********************************************************************************************************
Init
/*********************************************************************************************************/
void Scene_Voxel::Init()
{
	Scene::Init();
}

/*********************************************************************************************************
Update
/*********************************************************************************************************/
void Scene_Voxel::Update()
{
	Scene::Update();

	CU::view.camera.Update(CU::dt);
	CU::view.camera.UpdateInput(CU::dt);

	//set basic shader so it starts first later-----------------------------------------------------------------------//
	CU::view.SetShader(BASIC_SHADER);
}

/*********************************************************************************************************
Render
/*********************************************************************************************************/
void Scene_Voxel::Tmp_Draw()
{
	Scene::Tmp_Draw();

	//axes--------------------------------------------------------------//
	CU::view.Pre_DrawMesh(Vector3(0, 0, 0), Vector3(1700, 1700, 1700), CU::axes);
	CU::axes->Draw();
}

void Scene_Voxel::Tmp_DrawOnScreen()
{
	CU::view.SetShader(TEXT_SHADER);
	CU::view.StartRendering2D_onScreen();

	//render text
	ss.str("");
	ss << "FPS: " << (int)CU::fps;
	CU::view.RenderText(ss.str(), Vector2(85, 130), 0.9f, Color(227, 157, 27));
}

/*********************************************************************************************************
Exit
/*********************************************************************************************************/
void Scene_Voxel::Exit()
{
	Scene::Exit();
}

/*********************************************************************************************************
Input
/*********************************************************************************************************/
void Scene_Voxel::Update_KeyPressed()
{
	Scene::Update_KeyPressed();
}

void Scene_Voxel::Update_KeyReleased()
{
	Scene::Update_KeyReleased();
}
